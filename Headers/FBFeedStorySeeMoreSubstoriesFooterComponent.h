//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedComponentToolbox, FBMemFeedStory;

@interface FBFeedStorySeeMoreSubstoriesFooterComponent : CKCompositeComponent
{
    FBMemFeedStory *_story;
    FBFeedComponentToolbox *_toolbox;
}

+ (id)newWithStory:(id)arg1 storyInsets:(struct UIEdgeInsets)arg2 toolbox:(id)arg3;
- (void).cxx_destruct;
- (void)didTapSeeMore;

@end

