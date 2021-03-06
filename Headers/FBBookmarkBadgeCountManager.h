//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBInvalidating-Protocol.h"

@class FBJewelController, FBKVOController, FBMQTTClientManager, FBMQTTListener, FBMemBookmarkStore, NSString;

@interface FBBookmarkBadgeCountManager : NSObject <FBInvalidating>
{
    FBMemBookmarkStore *_memStore;
    FBMQTTClientManager *_mqttClientManager;
    FBJewelController *_jewelController;
    FBKVOController *_KVOController;
    BOOL _invalidated;
    unsigned int _updateState;
    unsigned int _unseenMessageCount;
    unsigned int _unseenFriendRequestCount;
    FBMQTTListener *_unreadMessageListener;
}

@property(retain, nonatomic) FBMQTTListener *unreadMessageListener; // @synthesize unreadMessageListener=_unreadMessageListener;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
- (void)_onStartupFinished;
- (void)_didReceiveUnseenFriendRequestChange;
- (void)_updateUnseenFriendRequests:(unsigned int)arg1;
- (void)_didReceiveUnreadMessageChange:(id)arg1;
- (void)_updateMessageCount:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 jewelController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

