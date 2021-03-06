//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBLigerBaseExperimentContext.h"

@interface FBLigerTCPPingExperimentContext : FBLigerBaseExperimentContext
{
    BOOL _pingEnabled;
    BOOL _cancelPingOnReply;
    int _pingTimeout;
    int _pingRetries;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL cancelPingOnReply; // @synthesize cancelPingOnReply=_cancelPingOnReply;
@property(readonly, nonatomic) int pingRetries; // @synthesize pingRetries=_pingRetries;
@property(readonly, nonatomic) int pingTimeout; // @synthesize pingTimeout=_pingTimeout;
@property(readonly, nonatomic) BOOL pingEnabled; // @synthesize pingEnabled=_pingEnabled;

@end

