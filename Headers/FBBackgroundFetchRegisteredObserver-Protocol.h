//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBBackgroundFetchRequest, FBReachabilityStateTransition_DEPRECATED, NSDate;
@protocol FBBackgroundFetchObserver;

@protocol FBBackgroundFetchRegisteredObserver <NSObject>
- (BOOL)shouldBeCalledAtDate:(NSDate *)arg1 notification:(BOOL)arg2 reachability:(FBReachabilityStateTransition_DEPRECATED *)arg3;
- (void)handleBackgroundFetchRequest:(FBBackgroundFetchRequest *)arg1;
- (id <FBBackgroundFetchObserver>)observer;

@optional
- (double)minimumInterval;
@end

