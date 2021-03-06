//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBLocationManagerSubscription-Protocol.h"

@class FBLocationManager, NSTimer;
@protocol FBCallPath;

@interface FBLocationManagerSubscriptionEntry : NSObject <FBLocationManagerSubscription>
{
    BOOL _isLocationListener;
    CDUnknownBlockType _block;
    FBLocationManager *_manager;
    NSTimer *_accurateFixTimeoutTimer;
    id <FBCallPath> _callPath;
    double _desiredAccuracy;
}

@property(retain, nonatomic) id <FBCallPath> callPath; // @synthesize callPath=_callPath;
@property(nonatomic) BOOL isLocationListener; // @synthesize isLocationListener=_isLocationListener;
@property(retain, nonatomic) NSTimer *accurateFixTimeoutTimer; // @synthesize accurateFixTimeoutTimer=_accurateFixTimeoutTimer;
@property(retain, nonatomic) FBLocationManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
- (void).cxx_destruct;
- (void)unsubscribe;

@end

