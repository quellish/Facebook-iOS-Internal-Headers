//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMQTTClientManager, FBMQTTListener, VOIPConfiguration;

@protocol MNMQTTListenerManaging <NSObject>
- (BOOL)scheduledEndBackgroundTask;
- (void)removeMQTTListener:(FBMQTTListener *)arg1;
- (void)addMQTTListener:(FBMQTTListener *)arg1;
- (void)stopMQTTListeners;
- (void)startMQTTListeners;
- (void)updateVOIPConfig:(VOIPConfiguration *)arg1;
- (void)configureWithMQTTClientManager:(FBMQTTClientManager *)arg1 voipConfig:(VOIPConfiguration *)arg2;
@end

