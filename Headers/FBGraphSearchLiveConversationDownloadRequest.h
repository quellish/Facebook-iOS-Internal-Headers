//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLDownloadRequest.h"

@class NSArray, NSNumber, NSString;

@interface FBGraphSearchLiveConversationDownloadRequest : FBGraphQLDownloadRequest
{
    NSArray *_storyIDs;
    NSNumber *_sinceTime;
    NSNumber *_numResults;
    NSString *_queryString;
}

@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(copy, nonatomic) NSNumber *numResults; // @synthesize numResults=_numResults;
@property(copy, nonatomic) NSNumber *sinceTime; // @synthesize sinceTime=_sinceTime;
@property(copy, nonatomic) NSArray *storyIDs; // @synthesize storyIDs=_storyIDs;
- (void).cxx_destruct;
- (id)newQuery;
- (id)initWithQueryString:(id)arg1 callbackPerformer:(id)arg2;
- (id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2;

@end

