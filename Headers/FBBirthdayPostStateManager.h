//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserPreferences, NSMutableDictionary;

@interface FBBirthdayPostStateManager : NSObject
{
    FBUserPreferences *_userPreferences;
    NSMutableDictionary *_birthdayStates;
    NSMutableDictionary *_birthdayListeners;
    NSMutableDictionary *_birthdayListenerCounts;
}

- (void).cxx_destruct;
- (void)_cleanupListeners;
- (void)removeListener:(id)arg1 forPerson:(id)arg2;
- (void)addListener:(id)arg1 forPerson:(id)arg2;
- (void)_setState:(int)arg1 forPerson:(id)arg2 sendUpdateAndPersist:(BOOL)arg3;
- (void)setState:(int)arg1 forPerson:(id)arg2;
- (int)stateForPerson:(id)arg1;
- (id)initWithPreferences:(id)arg1;

@end

