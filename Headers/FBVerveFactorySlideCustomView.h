//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVerveFactorySlideListView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class FBVervePackageBackgroundView, FBVervePackageGroupView, FBVerveSlide, FBVerveSlideLayout, FBVerveTransitionController, NSString, UIScrollView;

@interface FBVerveFactorySlideCustomView : FBVerveFactorySlideListView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    FBVervePackageGroupView *_containerView;
    FBVervePackageBackgroundView *_bgView;
    FBVervePackageGroupView *_groupView;
    struct CGPoint _centerOffset;
    struct CGSize _pageSize;
    struct CGPoint _lastPage;
    int _swipeDirection;
    int _ignoreScroll;
    struct CGSize _layoutSize;
    FBVerveTransitionController *_transition;
    FBVerveSlide *_lastSelected;
    BOOL _needsPrefetch;
    FBVerveSlide *_visibleSlide;
    double _lastVisible;
    FBVerveSlideLayout *_layout;
}

@property(retain, nonatomic) FBVerveSlideLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)slideAfter:(id)arg1 inDirection:(int)arg2;
- (void)foreachSubview:(CDUnknownBlockType)arg1;
- (void)synchronizeSlideVisibility;
- (void)updateSlideVisibility;
- (void)invalidate;
- (void)renderSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_dispatchSelected;
- (void)_updateContainer;
- (void)_updateScrollView;
- (void)setSlide:(id)arg1 animationSpeed:(float)arg2;
- (id)slide;
- (id)layoutForSlide:(id)arg1;
- (id)scrollView;
- (void)setFactory:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

