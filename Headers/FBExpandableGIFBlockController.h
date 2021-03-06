//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExpandableMediaBlockController.h"

@class FBAnimatedGIFNode;

@interface FBExpandableGIFBlockController : FBExpandableMediaBlockController
{
    FBAnimatedGIFNode *_animatedGIFNode;
}

+ (struct CGSize)mediaSizeForBlock:(id)arg1;
+ (id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4;
+ (BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2;
- (void).cxx_destruct;
- (void)didReceivePlaybackFocus;
- (void)didLoseFocus;
- (void)didReceiveFocus;
- (void)didEnterPreloadViewport;
- (id)interactiveMediaNodeController;
- (id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4;

@end

