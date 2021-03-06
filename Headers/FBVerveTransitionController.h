//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBVerveColor, FBVervePackage, FBVerveSlideLayout, FBVerveTransition, FBVerveView, NSArray, NSString;

@interface FBVerveTransitionController : NSObject
{
    struct objc_ptr<FBVervePackage> _package;
    struct objc_ptr<FBVerveTransition> _transitionObject;
    struct objc_ptr<FBVerveSlideLayout> _from;
    struct objc_ptr<FBVerveSlideLayout> _to;
    struct animation_group _transition;
    struct animation_group _timeline;
    struct objc_ptr<NSArray> _modelViews;
    struct objc_ptr<FBVerveView> _headerView;
    NSString *_inStateName;
    NSString *_outStateName;
    double _duration;
    int _timing;
    _Bool _merge_bgcolor;
    _Bool _fromSlideBeforeTo;
    _Bool _disable_magic_fade;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBVerveColor *backgroundColor;
- (void)updateViews;
@property(readonly, nonatomic) BOOL needsPeriodicUpdates;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
@property(nonatomic) double timelineSpeed;
@property(nonatomic) double transitionProgress;
@property(nonatomic) double transitionSpeed;
- (void)setCurrentTime:(double)arg1;
- (void)_renderTimelineWithSlide:(id)arg1 reversed:(BOOL)arg2 views:(id)arg3;
- (void)_renderMagicMoveFrom:(id)arg1 to:(id)arg2 into:(id)arg3;
- (void)_blendFromView:(id)arg1 toState:(id)arg2;
- (void)_blendToView:(id)arg1 fromState:(id)arg2;
- (void)_blendFromView:(id)arg1 state:(id)arg2 toView:(id)arg3 state:(id)arg4;
- (void)_renderMoveTransition:(id)arg1 direction:(id)arg2 by:(struct CGPoint)arg3 from:(id)arg4 to:(id)arg5 into:(id)arg6;
- (void)_renderFadeFrom:(id)arg1 to:(id)arg2 into:(id)arg3;
@property(readonly, nonatomic) FBVerveView *headerView;
@property(readonly, copy, nonatomic) NSArray *modelViews;
@property(readonly, nonatomic) FBVerveSlideLayout *to;
@property(readonly, nonatomic) FBVerveSlideLayout *from;
@property(readonly, nonatomic) FBVerveTransition *transition;
@property(readonly, nonatomic) FBVervePackage *package;
- (id)initWithPackage:(id)arg1 slideLayout:(id)arg2 direction:(int)arg3;
- (id)initWithPackage:(id)arg1 transition:(id)arg2 begin:(double)arg3 from:(id)arg4 to:(id)arg5 swipeDirection:(id)arg6;

@end

