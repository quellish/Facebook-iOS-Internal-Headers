//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

@interface FBPermalinkOverlaySpinnerManager : NSObject
{
    UIView *_targetView;
    UIView *_spinnerOverlay;
}

- (void).cxx_destruct;
- (void)dismissSpinner;
- (void)presentSpinner;
@property(readonly, nonatomic, getter=isPresentingSpinner) BOOL presentingSpinner;
- (id)initWithTargetView:(id)arg1;

@end

