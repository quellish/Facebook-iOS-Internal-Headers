//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FBFeedSwitcherViewController;
@protocol FBMenuItem;

@protocol FBFeedSwitcherDelegate
- (void)feedSwitcherDidTapDimmingView:(FBFeedSwitcherViewController *)arg1;
- (void)feedSwitcher:(FBFeedSwitcherViewController *)arg1 didSelectSettingsButtonForMenuItem:(id <FBMenuItem>)arg2;
- (void)feedSwitcher:(FBFeedSwitcherViewController *)arg1 didSelectMenuItem:(id <FBMenuItem>)arg2;
@end

