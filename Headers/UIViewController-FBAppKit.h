//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSAttributedString, NSString, UIView;

@interface UIViewController (FBAppKit)
+ (void)allowNavBarSearchField:(BOOL)arg1;
- (id)fb_fromViewControllerAnimatedTransitioningForOperation:(int)arg1 toViewController:(id)arg2;
- (id)fb_toViewControllerAnimatedTransitioningForOperation:(int)arg1 fromViewController:(id)arg2;
- (void)customizeNavigationBarWithCancelButton:(id)arg1 doneButton:(id)arg2;
@property(readonly, nonatomic) BOOL fb_disableFakePush;
@property(readonly, nonatomic) float fb_navigationSearchBarRightOffset;
@property(readonly, nonatomic) BOOL hasTrivialNavigationBar;
@property(nonatomic) BOOL fb_showAuxiliaryViewController;
@property(readonly, copy, nonatomic) NSAttributedString *fb_attributedSearchText;
@property(readonly, copy, nonatomic) NSString *fb_searchTextSubtitle;
@property(readonly, nonatomic) BOOL fb_useDefaultSearchText;
@property(readonly, nonatomic) SEL fb_actionForInternalSettingsDoneButton;
@property(readonly, nonatomic) SEL fb_actionForTopNavMoreOptionsButton;
@property(readonly, nonatomic) BOOL fb_enableChatBarButton;
@property(readonly, nonatomic) BOOL fb_showNavBarSearchField;
@property(readonly, nonatomic) UIView *fb_searchTextFieldRightAccessoryView;
@property(readonly, nonatomic) BOOL fb_leftAlignSearchText;
@property(readonly, nonatomic) BOOL fb_viewControllerSuppressBackButton;
@property(readonly, nonatomic) BOOL fb_suppressAnimationForNavBarVisibilityStateOnNavigation;
@property(readonly, nonatomic) BOOL fb_hidesNavigationBar;
@property(readonly, nonatomic) BOOL fb_hidesTabBar;
@property(readonly, nonatomic) SEL fb_actionForBackArrowButton;
@property(readonly, nonatomic) BOOL fb_showBackArrowButton;
- (BOOL)fb_swipeToOpenLeftNav;
- (BOOL)fb_deferSwipeToOpenLeftNav;
- (BOOL)fb_touchShouldPreventSwipeToOpenLeftNav:(id)arg1;
@property(readonly, nonatomic) BOOL fb_showNavigationJewels;
@end

