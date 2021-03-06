//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class FBAVAssetSegment, NSString;

@interface FBUploadPartition : NSObject <NSCoding>
{
    FBAVAssetSegment *_segment;
    unsigned int _startOffset;
    unsigned int _endOffset;
    NSString *_relativeSegmentCachePath;
}

+ (id)_getCacheUrl;
+ (id)_getCachePath;
+ (id)newWithAssetSegment:(id)arg1 range:(struct _NSRange)arg2;
@property(copy, nonatomic) NSString *relativeSegmentCachePath; // @synthesize relativeSegmentCachePath=_relativeSegmentCachePath;
@property(readonly, nonatomic) unsigned int endOffset; // @synthesize endOffset=_endOffset;
@property(readonly, nonatomic) unsigned int startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) FBAVAssetSegment *segment; // @synthesize segment=_segment;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned int)segmentSize;

@end

