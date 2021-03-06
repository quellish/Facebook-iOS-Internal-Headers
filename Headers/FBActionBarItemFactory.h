//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBActionBarItemFactory : NSObject
{
}

+ (id)_viewGroupInfoButtonWithTarget:(id)arg1 action:(SEL)arg2 size:(unsigned int)arg3;
+ (id)_setupShareInPostButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupSendInMessageButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupReportGroupButtonWithTarget:(id)arg1 action:(SEL)arg2 size:(unsigned int)arg3;
+ (id)_setupLeaveGroupButtonWithTarget:(id)arg1 action:(SEL)arg2 size:(unsigned int)arg3;
+ (id)_setupFavoriteGroupButtonWithTarget:(id)arg1 action:(SEL)arg2 size:(unsigned int)arg3;
+ (id)_setupFollowGroupButtonWithTarget:(id)arg1 action:(SEL)arg2 size:(unsigned int)arg3;
+ (id)_setupCreateGroupButtonWithTarget:(id)arg1 action:(SEL)arg2 size:(unsigned int)arg3;
+ (id)_setupCreateEventButtonWithTarget:(id)arg1 action:(SEL)arg2 size:(unsigned int)arg3;
+ (id)_setupCreateGroupChatButtonWithTarget:(id)arg1 action:(SEL)arg2 size:(unsigned int)arg3;
+ (id)_setupCopyLinkToGroupButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupCancelRequestGroupButtonWithTarget:(id)arg1 action:(SEL)arg2 size:(unsigned int)arg3;
+ (id)_setupAddMemberGroupButtonWithTarget:(id)arg1 andAction:(SEL)arg2 withSize:(unsigned int)arg3;
+ (id)_setupTopicSubscriptionButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupChangeGroupPrivacyButtonWithTarget:(id)arg1 andAction:(SEL)arg2 withSize:(unsigned int)arg3;
+ (id)_setupCancelGroupCreationButtonWithTarget:(id)arg1 andAction:(SEL)arg2 withSize:(unsigned int)arg3;
+ (id)_setupJoinGroupButtonWithTarget:(id)arg1 andAction:(SEL)arg2 withSize:(unsigned int)arg3;
+ (id)actionBarItemWithType:(unsigned int)arg1 glyph:(unsigned int)arg2 title:(id)arg3 target:(id)arg4 action:(SEL)arg5 withSize:(unsigned int)arg6;
+ (id)actionBarItemWithGlyph:(unsigned int)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4 withSize:(unsigned int)arg5;
+ (id)_getTitleColorWithRefreshVariance:(BOOL)arg1;
+ (id)_setupPageSuggestEditsButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupVisitWebsiteButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupCopyEmailButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupSendEmailButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupSharePhotoButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupWritePostButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupReviewsButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupVideosButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupPhotosButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupAboutButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupManageAdsButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupPlaceClaimButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupAddToFavoritesButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupDeleteResidenceButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupDeletePageButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupCreatePageButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupGenericButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupSuggestEditsButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupEditReviewButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupReviewButtonWithTarget:(id)arg1 andAction:(SEL)arg2 withSize:(unsigned int)arg3;
+ (id)_setupSaveButtonWithTarget:(id)arg1 andAction:(SEL)arg2 refreshVariance:(BOOL)arg3 withSize:(unsigned int)arg4;
+ (id)_setupInstallButtonWithTarget:(id)arg1 andAction:(SEL)arg2 refreshVariance:(BOOL)arg3 withSize:(unsigned int)arg4;
+ (id)_setupOpenButtonWithTarget:(id)arg1 andAction:(SEL)arg2 refreshVariance:(BOOL)arg3 withSize:(unsigned int)arg4;
+ (id)_setupPlayButtonWithTarget:(id)arg1 andAction:(SEL)arg2 refreshVariance:(BOOL)arg3 withSize:(unsigned int)arg4;
+ (id)_setupMessageButtonWithTarget:(id)arg1 andAction:(SEL)arg2 refreshVariance:(BOOL)arg3 withSize:(unsigned int)arg4;
+ (id)_setupFollowButtonWithTarget:(id)arg1 andAction:(SEL)arg2 withSize:(unsigned int)arg3;
+ (id)_setupCopyLinkButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupCallButtonWithTarget:(id)arg1 andAction:(SEL)arg2 refreshVariance:(BOOL)arg3 withSize:(unsigned int)arg4;
+ (id)_setupCheckInButtonWithTarget:(id)arg1 andAction:(SEL)arg2 refreshVariance:(BOOL)arg3 withSize:(unsigned int)arg4;
+ (id)_setupReportButtonWithTarget:(id)arg1 andAction:(SEL)arg2;
+ (id)_setupShareButtonWithTarget:(id)arg1 andAction:(SEL)arg2 refreshVariance:(BOOL)arg3 withSize:(unsigned int)arg4;
+ (id)_setupFollowLikeButtonWithTarget:(id)arg1 andAction:(SEL)arg2 refreshVariance:(BOOL)arg3 withSize:(unsigned int)arg4;
+ (id)_setupLikeButtonWithTarget:(id)arg1 andAction:(SEL)arg2 refreshVariance:(BOOL)arg3 withSize:(unsigned int)arg4;
+ (id)getActionBarItem:(unsigned int)arg1 withTarget:(id)arg2 andAction:(SEL)arg3 withSize:(unsigned int)arg4;
+ (id)getActionBarItem:(unsigned int)arg1 withTarget:(id)arg2 andAction:(SEL)arg3 refreshVariance:(BOOL)arg4 withSize:(unsigned int)arg5;
- (id)init;

@end

