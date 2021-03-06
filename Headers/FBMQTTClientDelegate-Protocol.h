//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMQTTEncodedMessage, NSError;
@protocol FBMQTTClient;

@protocol FBMQTTClientDelegate <NSObject>

@optional
- (void)mqttClientReconnectNow:(id <FBMQTTClient>)arg1;
- (void)mqttClient:(id <FBMQTTClient>)arg1 couldNotPublishMessage:(FBMQTTEncodedMessage *)arg2 error:(NSError *)arg3;
- (void)mqttClient:(id <FBMQTTClient>)arg1 didPublishMessage:(FBMQTTEncodedMessage *)arg2;
- (void)mqttClient:(id <FBMQTTClient>)arg1 didReceiveMessage:(FBMQTTEncodedMessage *)arg2;
- (void)mqttClientDidDisconnect:(id <FBMQTTClient>)arg1 error:(NSError *)arg2;
- (void)mqttClientCouldNotConnect:(id <FBMQTTClient>)arg1 error:(NSError *)arg2;
- (void)mqttClientDidConnect:(id <FBMQTTClient>)arg1;
@end

