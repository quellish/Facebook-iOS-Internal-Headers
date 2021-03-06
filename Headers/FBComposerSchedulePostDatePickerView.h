//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, UIBarButtonItem, UIDatePicker, UIToolbar;
@protocol FBScheduledPostPickerDelegate;

@interface FBComposerSchedulePostDatePickerView : UIView
{
    UIToolbar *_toolbar;
    UIBarButtonItem *_clearButton;
    UIBarButtonItem *_scheduleButton;
    UIDatePicker *_datePicker;
    BOOL _useUserSetting;
    id <FBScheduledPostPickerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBScheduledPostPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_schedule:(id)arg1;
- (void)_clear:(id)arg1;
@property(retain, nonatomic) NSDate *date;
- (void)layoutSubviews;
- (id)initWithUserSetting:(BOOL)arg1;
- (id)init;

@end

