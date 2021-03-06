//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNetworkerRequestDelegate-Protocol.h"

@class FBSimpleNetworkerRequest, NSString;
@protocol FBNetworkDispatch, FBServerContactsFetcherDelegate;

@interface FBServerContactsSearchFetcher : NSObject <FBNetworkerRequestDelegate>
{
    id <FBNetworkDispatch> _networkDispatcher;
    FBSimpleNetworkerRequest *_networkRequest;
    NSString *_searchText;
    id <FBServerContactsFetcherDelegate> _delegate;
}

@property(nonatomic) id <FBServerContactsFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (void)parseResponse:(id)arg1;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)cancel;
- (void)fetch;
- (id)initWithNetworkDispatcher:(id)arg1 searchText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

