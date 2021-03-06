//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface FBComposerPostCompositionItemCollectionChangeSet : FBValueObject <NSCopying>
{
    NSArray *_insertedIndexes;
    NSArray *_items;
    NSArray *_removedIndexes;
    NSArray *_updatedIndexes;
}

@property(readonly, copy, nonatomic) NSArray *updatedIndexes; // @synthesize updatedIndexes=_updatedIndexes;
@property(readonly, copy, nonatomic) NSArray *removedIndexes; // @synthesize removedIndexes=_removedIndexes;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSArray *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
- (void).cxx_destruct;
- (id)initWithInsertedIndexes:(id)arg1 items:(id)arg2 removedIndexes:(id)arg3 updatedIndexes:(id)arg4;

@end

