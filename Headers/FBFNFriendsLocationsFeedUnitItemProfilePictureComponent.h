//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBFeedComponentToolbox, FBIntentAnalyticsInfo, FBMemFriendLocationFeedUnitItem, FBMemFriendsLocationsFeedUnit;

@interface FBFNFriendsLocationsFeedUnitItemProfilePictureComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBMemFriendLocationFeedUnitItem *_item;
    FBMemFriendsLocationsFeedUnit *_unit;
    FBFeedComponentToolbox *_toolbox;
    FBIntentAnalyticsInfo *_analyticsInfo;
    BOOL _isFirstItem;
}

+ (id)newWithItem:(id)arg1 unit:(id)arg2 isFirstItem:(BOOL)arg3 toolbox:(id)arg4;
- (void).cxx_destruct;
- (void)becameFullyVisible;
- (void)didTapFriendCard:(id)arg1;
- (void)didTapMessage:(id)arg1;

@end

