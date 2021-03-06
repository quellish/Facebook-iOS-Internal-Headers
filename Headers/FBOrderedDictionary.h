//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface FBOrderedDictionary : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>
{
    map_29e207ab _map;
    CDUnknownBlockType _comparator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)allKeys;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)keyEnumerator;
- (unsigned int)count;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (id)initWithMapAndComparator:(map_29e207ab)arg1 comparator:(CDUnknownBlockType)arg2;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2 comparator:(CDUnknownBlockType)arg3;
- (id)initWithDictionary:(id)arg1 comparator:(CDUnknownBlockType)arg2;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

