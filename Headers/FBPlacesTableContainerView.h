//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, FBLoadingIndicatorView, NSString, UITableView;

@interface FBPlacesTableContainerView : UIView
{
    CALayer *_backgroundTopBorder;
    FBLoadingIndicatorView *_loadingView;
    UITableView *_tableView;
    UIView *_backgroundView;
    NSString *_activityIndicatorText;
}

@property(copy, nonatomic) NSString *activityIndicatorText; // @synthesize activityIndicatorText=_activityIndicatorText;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) FBLoadingIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (float)tableVerticalOffset;
- (void)updateActivityIndicatorPosition;
- (void)updateViewsDueToContentOffsetChange;
- (void)animateActivityIndicator:(BOOL)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

