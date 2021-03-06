//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBSearchPerfLogger : NSObject
{
    unsigned long long _resultsInitTime;
    unsigned long long _resultsDownloadStartTime;
    unsigned long long _resultsDownloadStopTime;
    unsigned long long _resultsRenderTime;
    NSString *_resultsSessionID;
    NSString *_requestTracker;
    BOOL _loggedDownloadStartTime;
    BOOL _loggedDownloadStopTime;
    BOOL _loggedRenderTime;
    BOOL _reportedPerfTimes;
}

- (void).cxx_destruct;
- (void)reportPerfLoggingForSearchSession:(id)arg1;
- (void)recordRenderTime;
- (void)recordDownloadStopTimeWithResultsSessionID:(id)arg1 requestTracker:(id)arg2;
- (void)recordDownloadStartTime;
- (id)init;

@end

