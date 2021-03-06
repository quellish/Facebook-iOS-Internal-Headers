//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppService-Protocol.h"

@class FBDelayServicesOnColdStartExperimentContext, FBMQTTClientManager, FBMQTTManager, FBNotificationsMQTTListenerAnnouncer, FBNotificationsMQTTTopicExperimentContext, FBUserSession, NSMutableArray, NSSet, NSString;

@interface FBNotificationsMQTTBroadcaster : NSObject <FBAppService>
{
    BOOL _subscribedToMQTT;
    FBUserSession *_session;
    FBMQTTManager *_mqttManager;
    FBMQTTClientManager *_mqttClientManager;
    NSMutableArray *_mqttListeners;
    FBNotificationsMQTTListenerAnnouncer *_announcer;
    FBDelayServicesOnColdStartExperimentContext *_delayServiceOnColdStartExperimentContext;
    FBNotificationsMQTTTopicExperimentContext *_notificationsMQTTTopicExperimentContext;
}

@property(retain, nonatomic) FBNotificationsMQTTTopicExperimentContext *notificationsMQTTTopicExperimentContext; // @synthesize notificationsMQTTTopicExperimentContext=_notificationsMQTTTopicExperimentContext;
@property(retain, nonatomic) FBDelayServicesOnColdStartExperimentContext *delayServiceOnColdStartExperimentContext; // @synthesize delayServiceOnColdStartExperimentContext=_delayServiceOnColdStartExperimentContext;
@property(retain, nonatomic) FBNotificationsMQTTListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(nonatomic) BOOL subscribedToMQTT; // @synthesize subscribedToMQTT=_subscribedToMQTT;
@property(retain, nonatomic) NSMutableArray *mqttListeners; // @synthesize mqttListeners=_mqttListeners;
@property(retain, nonatomic) FBMQTTClientManager *mqttClientManager; // @synthesize mqttClientManager=_mqttClientManager;
@property(retain, nonatomic) FBMQTTManager *mqttManager; // @synthesize mqttManager=_mqttManager;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)removeListenerToNotificationUpdates:(id)arg1;
- (void)addListenerToNotificationUpdates:(id)arg1;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (BOOL)_shouldTriggerSyncForMQTTMessage:(id)arg1 withSession:(id)arg2;
- (void)_logMQTTReceived:(id)arg1;
- (void)_unsubscribeFromMQTT;
- (void)_subscribeToMQTT;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

