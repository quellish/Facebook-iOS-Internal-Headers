//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBNotificationsAnalytics : NSObject
{
}

+ (void)logFeedCacheEfficiencyEventForStoryGraphQLID:(id)arg1 storyLegacyAPIPostId:(id)arg2 notificationGraphQLID:(id)arg3 notificationNDID:(id)arg4 notificationTrackingInfo:(id)arg5 source:(id)arg6 session:(id)arg7;
+ (void)logAddedNotifications:(id)arg1 updatedNotifications:(id)arg2 removedNotificationGraphQLIDs:(id)arg3 forLoadDataReason:(int)arg4;
+ (void)logNotification:(id)arg1 withSource:(id)arg2;
+ (void)logNotificationTapped:(id)arg1 atIndexPath:(id)arg2 withSource:(id)arg3 toURL:(id)arg4 session:(id)arg5;
+ (void)logPushNotificationDelivered:(id)arg1;
+ (id)syncEventForRefreshTrigger:(int)arg1;
+ (void)logNotificationsViewState:(id)arg1 withNotificationsCount:(unsigned int)arg2;
+ (void)logEvent:(id)arg1 extra:(id)arg2;

@end

