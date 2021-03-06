//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface FBIdleDetector : NSObject
{
    double _timeInterval;
    NSTimer *_idleTimer;
    CDUnknownBlockType _idleTimeReachedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType idleTimeReachedBlock; // @synthesize idleTimeReachedBlock=_idleTimeReachedBlock;
@property(retain, nonatomic) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
- (void).cxx_destruct;
- (void)_rescheduleIdleTimer;
- (void)_onIdleTimerFired:(id)arg1;
- (void)_idleStatusDidChange:(id)arg1;
- (void)stopIdleDetector;
- (void)startIdleDetectorWithTimeout:(double)arg1 idleTimeReachedBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

