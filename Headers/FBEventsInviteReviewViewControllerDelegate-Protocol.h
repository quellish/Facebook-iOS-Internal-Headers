//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBEventsInviteReviewViewController, NSArray;

@protocol FBEventsInviteReviewViewControllerDelegate <NSObject>
- (void)inviteReviewController:(FBEventsInviteReviewViewController *)arg1 didSelectSendButtonWithInvitees:(NSArray *)arg2;
- (void)inviteReviewController:(FBEventsInviteReviewViewController *)arg1 didFinishWithInvitees:(NSArray *)arg2;
@end

