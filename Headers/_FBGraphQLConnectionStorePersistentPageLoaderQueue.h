//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "_FBGraphQLConnectionStorePersistentPageLoaderOperationDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol _FBGraphQLConnectionstorePersistentPageLoaderOperation;

@interface _FBGraphQLConnectionStorePersistentPageLoaderQueue : NSObject <_FBGraphQLConnectionStorePersistentPageLoaderOperationDelegate>
{
    struct RecursiveMutex _mutex;
    NSMutableArray *_pendingOperations;
    id <_FBGraphQLConnectionstorePersistentPageLoaderOperation> _currentOperation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)persistentPageLoaderOperationDidFinish:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

