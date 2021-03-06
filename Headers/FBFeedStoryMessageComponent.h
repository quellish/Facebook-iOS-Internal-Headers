//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedStoryMessageMenuController, FBIntentAnalyticsInfo, FBMemFeedStory, FBRichTextWithEntitiesComponent;

@interface FBFeedStoryMessageComponent : CKCompositeComponent
{
    FBMemFeedStory *_story;
    unsigned int _state;
    FBRichTextWithEntitiesComponent *_messageTextComponent;
    FBIntentAnalyticsInfo *_intentAnalyticsInfo;
    FBFeedStoryMessageMenuController *_menuController;
}

+ (id)newWithStory:(id)arg1 style:(struct FBFeedStoryMessageComponentStyle)arg2 toolbox:(id)arg3 truncationStringAction:(SEL)arg4 messageTapAction:(SEL)arg5;
+ (id)initialState;
- (void).cxx_destruct;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;
- (void)toggleInlineExpansion;
- (void)sendInMessenger;
- (void)copyText;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@end

