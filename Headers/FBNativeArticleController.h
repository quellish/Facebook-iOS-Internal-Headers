//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBCardVisibility-Protocol.h"
#import "FBDescribable-Protocol.h"
#import "FBIntentHandler-Protocol.h"
#import "FBMinimorphability-Protocol.h"
#import "FBNativeArticlePreloadHandlerDelegate-Protocol.h"
#import "FBNativeArticleScrollHandlerDelegate-Protocol.h"
#import "FBNativeArticleScrollViewDelegate-Protocol.h"
#import "FBNativeArticleTransitionDriverDelegate-Protocol.h"
#import "FBNativeArticleVideoScrubbingNodeDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "_FBNativeArticleScrollNodeDelegate-Protocol.h"

@class ASDisplayNode, FBAnimationPerformanceLogger, FBNativeArticleDisplayConfiguration, FBNativeArticleInteractionRegistry, FBNativeArticlePreloadHandler, FBNativeArticleRendererController, FBNativeArticleResourceBundle, FBNativeArticleScrollHandler, FBNativeArticleScrollView, FBNativeArticleThirdPartyTrackingHandler, FBNativeArticleTransitionDriver, FBReusePoolController, FBRichStoryBlockControllerRegistry, FBRichStoryViewModel, FBUserSession, NSDictionary, NSMutableDictionary, NSString, UITapGestureRecognizer;
@protocol FBNativeArticleControllerDelegate;

@interface FBNativeArticleController : NSObject <FBDescribable, FBNativeArticlePreloadHandlerDelegate, FBNativeArticleScrollHandlerDelegate, FBNativeArticleScrollViewDelegate, FBNativeArticleTransitionDriverDelegate, FBNativeArticleVideoScrubbingNodeDelegate, _FBNativeArticleScrollNodeDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, FBCardVisibility, FBMinimorphability, FBIntentHandler>
{
    FBUserSession *_session;
    FBNativeArticleDisplayConfiguration *_displayConfiguration;
    FBNativeArticleScrollHandler *_scrollHandler;
    FBRichStoryViewModel *_storyModel;
    FBRichStoryBlockControllerRegistry *_blockControllerRegistry;
    struct {
        unsigned int didBeginTransition:1;
        unsigned int didUpdateTransition:1;
        unsigned int willFinishTransition:1;
        unsigned int didFinishTransition:1;
    } _delegateFlags;
    FBNativeArticleInteractionRegistry *_interactionRegistry;
    UITapGestureRecognizer *_interactionTapGestureRecognizer;
    FBNativeArticleResourceBundle *_resourceBundle;
    FBNativeArticleTransitionDriver *_transitionDriver;
    struct {
        unsigned int didBeginTransition:1;
        unsigned int didUpdateTransition:1;
        unsigned int willFinishTransition:1;
        unsigned int didFinishTransition:1;
        unsigned int contentCenterPoint:1;
    } _transitioningBlockControllerDelegateFlags;
    FBNativeArticlePreloadHandler *_preloadHandler;
    FBReusePoolController *_reusePoolController;
    unsigned int _numDisplayed;
    FBNativeArticleThirdPartyTrackingHandler *_trackingHandler;
    NSMutableDictionary *_analyticsInfo;
    FBAnimationPerformanceLogger *_apTracker;
    BOOL _isScrollingToTopFromScrollingNode;
    ASDisplayNode *_scrollViewNode;
    id <FBNativeArticleControllerDelegate> _delegate;
    FBNativeArticleRendererController *_rendererController;
    double _maxPercentScrolled;
}

+ (id)viewModelFromViewModel:(id)arg1 supportedByBlockControllerRegistry:(id)arg2 inPresentationState:(id)arg3;
+ (id)articleControllerForViewModel:(id)arg1 presentationState:(id)arg2 resourceBundle:(id)arg3 interfaceGuide:(id)arg4 viewportSize:(struct CGSize)arg5 closeBarMetrics:(id)arg6 session:(id)arg7 thirdPartyTrackers:(id)arg8 analyticsInfo:(id)arg9;
@property(nonatomic) double maxPercentScrolled; // @synthesize maxPercentScrolled=_maxPercentScrolled;
@property(readonly, nonatomic) FBNativeArticleRendererController *rendererController; // @synthesize rendererController=_rendererController;
@property(readonly, nonatomic) BOOL isScrollingToTopFromScrollingNode; // @synthesize isScrollingToTopFromScrollingNode=_isScrollingToTopFromScrollingNode;
@property(nonatomic) __weak id <FBNativeArticleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)_interactiveViewportFromScrollView:(id)arg1;
- (struct CGRect)_scrollingWorkingViewportFromScrollView:(id)arg1;
- (struct CGRect)_preloadableViewportFromScrollView:(id)arg1;
- (id)preloadHandler:(id)arg1 blockControllersForPreloadableViewport:(struct CGRect)arg2;
- (id)videoScrubbingNodeResponder;
- (id)f_bugDescription;
- (void)handleIntent:(id)arg1;
- (void)didExpandWithProgress:(float)arg1;
- (void)willCollapse;
- (void)willExpand;
- (void)didCollapse;
- (void)didExpand;
- (void)didTranslate;
- (void)didBeginScaleGesture;
- (void)cardDidSettleWithoutFullscreenFocus:(int)arg1;
- (void)cardMaySettleWithoutFullscreenFocus;
- (void)cardDidSettleWithFullscreenFocus;
- (void)cardMaySettleWithFullscreenFocus;
- (void)cardDidBeginMoving:(int)arg1;
- (void)cardWasCulledFromWorkingRange;
- (void)cardDidEnterWorkingRange;
- (void)storyScrollHandler:(id)arg1 willEnterFullscreenStoryBlock:(id)arg2;
- (void)storyScrollHandler:(id)arg1 didExitFullscreenStoryBlock:(id)arg2;
- (void)storyScrollHandler:(id)arg1 didEnterFullscreenStoryBlock:(id)arg2;
- (unsigned int)storyScrollHandler:(id)arg1 fullscreenPresentationStyleForStoryBlock:(id)arg2;
- (id)storyScrollHandler:(id)arg1 blockBeforeBlock:(id)arg2;
- (id)storyScrollHandler:(id)arg1 blockAfterBlock:(id)arg2;
- (struct CGRect)storyScrollHandler:(id)arg1 frameForElementWithID:(id)arg2;
- (id)storyScrollHandler:(id)arg1 currentBlocksWithinFrame:(struct CGRect)arg2;
- (void)rendererController:(id)arg1 didUpdateFocusState:(unsigned int)arg2;
- (void)rendererController:(id)arg1 storyBlockExitedInteractiveViewport:(id)arg2;
- (void)rendererController:(id)arg1 storyBlockEnteredInteractiveViewport:(id)arg2;
- (void)rendererController:(id)arg1 storyBlockExitedWorkingViewport:(id)arg2;
- (void)rendererController:(id)arg1 storyBlockEnteredWorkingViewport:(id)arg2;
- (void)rendererController:(id)arg1 didCullBlockController:(id)arg2 forStoryBlock:(id)arg3;
- (void)rendererController:(id)arg1 didGenerateBlockController:(id)arg2 forStoryBlock:(id)arg3;
- (void)rendererController:(id)arg1 didFinishContentSizeCalculation:(struct CGSize)arg2;
- (void)rendererController:(id)arg1 didUpdateContentSize:(struct CGSize)arg2;
- (void)rendererController:(id)arg1 removeRenderableFromRoot:(id)arg2 forStoryBlock:(id)arg3;
- (void)rendererController:(id)arg1 addRenderableToRoot:(id)arg2 forStoryBlock:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)_shouldUpdateViewports;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_didUpdateRendering;
- (void)blockNodeDidFinishDisplay:(id)arg1;
- (void)scrollNodeDidLoad:(id)arg1;
- (struct CGSize)_scrollViewContentSizeWithLayoutSize:(struct CGSize)arg1;
- (BOOL)nativeArticleScrollView:(id)arg1 shouldRecognizePanSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)nativeArticleScrollView:(id)arg1 storyCanRespondToGestureInDirection:(int)arg2 atPoint:(struct CGPoint)arg3;
- (BOOL)transitionDriver:(id)arg1 shouldRecognizePanSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)transitionDriver:(id)arg1 didFinishTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 withResultantLayout:(id)arg4;
- (void)transitionDriver:(id)arg1 willFinishTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 animationConfiguration:(CDStruct_29228278)arg4;
- (void)transitionDriver:(id)arg1 didUpdateTrackingPoint:(struct CGPoint)arg2 forStoryBlock:(id)arg3;
- (void)transitionDriver:(id)arg1 didUpdateTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 withProgress:(float)arg4;
- (void)transitionDriver:(id)arg1 didBeginTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 atTouchPoint:(struct CGPoint)arg4 transitionLayout:(id)arg5;
- (void)transitionDriver:(id)arg1 willBeginTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 atTouchPoint:(struct CGPoint)arg4;
- (id)transitionDriver:(id)arg1 transitionLayoutForStoryBlock:(id)arg2 withPresentationAttributes:(id)arg3;
- (struct CGPoint)transitionDriver:(id)arg1 destinationTrackingPointForStoryBlock:(id)arg2 transitioningToPresentationAttributes:(id)arg3 withLayout:(id)arg4;
- (struct CGPoint)transitionDriver:(id)arg1 currentTrackingPointForStoryBlock:(id)arg2;
- (BOOL)transitionDriver:(id)arg1 shouldBeginTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3;
- (BOOL)transitionDriver:(id)arg1 canRespondToGestureInDirection:(int)arg2 atPoint:(struct CGPoint)arg3;
- (id)transitionDriver:(id)arg1 storyBlockAtPoint:(struct CGPoint)arg2;
- (id)_destinationLayoutForPresentationAttributes:(id)arg1 appliedToStoryBlock:(id)arg2;
- (id)_newPresentationAttributesForBlock:(id)arg1 withTransitionAttributes:(id)arg2;
- (id)_presentationStateByApplyingPresentationAttributes:(id)arg1 toBlock:(id)arg2;
- (void)_didScrollScrollView:(id)arg1 withIntent:(unsigned int)arg2;
- (void)_handleStoryInteractionTap:(id)arg1;
- (BOOL)_interactionHandlerCanRespondToGestureInDirection:(int)arg1 atPoint:(struct CGPoint)arg2;
- (id)_storyBlockAtPoint:(struct CGPoint)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateScrollIndicatorVisibility;
- (BOOL)_storyBlocksCanRespondToGestureInDirection:(int)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)canRespondToGestureInDirection:(int)arg1 atPoint:(struct CGPoint)arg2;
- (void)_setInteractionEnabled:(BOOL)arg1;
- (BOOL)isPannedToEdge:(unsigned int)arg1;
- (void)requireGestureRecognizerToFailBeforePanning:(id)arg1;
@property(readonly, nonatomic) ASDisplayNode *scrollViewNode; // @synthesize scrollViewNode=_scrollViewNode;
- (id)_createScrollView;
@property(readonly, nonatomic) FBNativeArticleScrollView *scrollView;
@property(readonly, copy, nonatomic) NSDictionary *analyticsInfo;
- (void)setMaxPercentScrolledWithOffset:(float)arg1 contentHeight:(float)arg2;
- (void)_didReceiveMemoryWarning;
- (void)didDisappear;
- (void)_updateRageShakeLastArticle;
- (void)didAppear;
- (void)willAppear;
- (void)dealloc;
- (id)initWithRichStoryViewModel:(id)arg1 presentationState:(id)arg2 displayConfiguration:(id)arg3 interactionRegistry:(id)arg4 blockControllerRegistry:(id)arg5 resourceBundle:(id)arg6 session:(id)arg7 thirdPartyTrackers:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

