//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBRichStoryBlock.h"

@protocol FBRichStoryEntity;

@interface FBRichStoryEntityBlock : FBRichStoryBlock
{
    id <FBRichStoryEntity> _entity;
}

@property(retain, nonatomic) id <FBRichStoryEntity> entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEntity:(id)arg1 blockID:(id)arg2 analyticsID:(id)arg3 annotations:(id)arg4;

@end

