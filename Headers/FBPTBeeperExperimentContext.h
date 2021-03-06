//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@class NSString;

@interface FBPTBeeperExperimentContext : FBExperimentContext
{
    BOOL _notificationEnabled;
    NSString *_notificationTitle;
    NSString *_notificationSubtitle;
    unsigned int _enabledSignalsBitmask;
    unsigned int _feedOnlySignalsBitmask;
    unsigned int _deferredFeedUnitSignalsBitmask;
    double _notificationDurationMin;
    double _notificationDurationMax;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) unsigned int deferredFeedUnitSignalsBitmask; // @synthesize deferredFeedUnitSignalsBitmask=_deferredFeedUnitSignalsBitmask;
@property(readonly, nonatomic) unsigned int feedOnlySignalsBitmask; // @synthesize feedOnlySignalsBitmask=_feedOnlySignalsBitmask;
@property(readonly, nonatomic) unsigned int enabledSignalsBitmask; // @synthesize enabledSignalsBitmask=_enabledSignalsBitmask;
@property(readonly, copy, nonatomic) NSString *notificationSubtitle; // @synthesize notificationSubtitle=_notificationSubtitle;
@property(readonly, copy, nonatomic) NSString *notificationTitle; // @synthesize notificationTitle=_notificationTitle;
@property(readonly, nonatomic) double notificationDurationMax; // @synthesize notificationDurationMax=_notificationDurationMax;
@property(readonly, nonatomic) double notificationDurationMin; // @synthesize notificationDurationMin=_notificationDurationMin;
@property(nonatomic) BOOL notificationEnabled; // @synthesize notificationEnabled=_notificationEnabled;
- (void).cxx_destruct;

@end

