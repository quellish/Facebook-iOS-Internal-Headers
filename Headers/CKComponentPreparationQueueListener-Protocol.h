//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKComponentPreparationQueue;

@protocol CKComponentPreparationQueueListener <NSObject>
- (void)componentPreparationQueue:(CKComponentPreparationQueue *)arg1 didFinishPreparingBatchOfSize:(unsigned int)arg2 batchID:(unsigned int)arg3;
- (void)componentPreparationQueue:(CKComponentPreparationQueue *)arg1 didStartPreparingBatchOfSize:(unsigned int)arg2 batchID:(unsigned int)arg3;
@end

