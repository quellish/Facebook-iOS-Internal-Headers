//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentHostingViewDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class CKComponentHostingView, NSString, UIView;

@interface FBFollowSheetViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, CKComponentHostingViewDelegate>
{
    UIView *_dimmingView;
    CKComponentHostingView *_followSheetView;
    BOOL _isPresenting;
}

+ (id)newWithPage:(id)arg1 session:(id)arg2;
+ (id)newWithPerson:(id)arg1 session:(id)arg2;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissFollowSheet;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (void)updateModel:(id)arg1;
- (id)initWithModel:(id)arg1 componentProvider:(Class)arg2 fieldSetToObserve:(const struct FBGraphQLFieldSet *)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

