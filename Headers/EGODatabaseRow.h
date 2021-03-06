//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EGODatabaseResult, NSMutableArray;

@interface EGODatabaseRow : NSObject
{
    NSMutableArray *columnData;
    EGODatabaseResult *result;
}

@property(readonly) NSMutableArray *columnData; // @synthesize columnData;
- (void)dealloc;
- (id)dataForColumnIndex:(int)arg1;
- (id)dataForColumn:(id)arg1;
- (id)dateForColumnIndex:(int)arg1;
- (id)dateForColumn:(id)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (id)stringForColumn:(id)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (double)doubleForColumn:(id)arg1;
- (BOOL)boolForColumnIndex:(int)arg1;
- (BOOL)boolForColumn:(id)arg1;
- (long long)int64ForColumnIndex:(int)arg1;
- (long long)int64ForColumn:(id)arg1;
- (unsigned long long)uint64ForColumnIndex:(int)arg1;
- (unsigned long long)uint64ForColumn:(id)arg1;
- (long)longForColumnIndex:(int)arg1;
- (long)longForColumn:(id)arg1;
- (unsigned int)unsignedIntegerForColumnIndex:(int)arg1;
- (unsigned int)unsignedIntegerForColumn:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (int)intForColumn:(id)arg1;
- (BOOL)columnTypeIsDataAtIndex:(int)arg1;
- (BOOL)columnTypeIsStringAtIndex:(int)arg1;
- (id)initWithDatabaseResult:(id)arg1;

@end

