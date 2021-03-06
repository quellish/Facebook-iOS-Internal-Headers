//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface FBImageDescriptorDebugLayer : NSObject
{
    struct vector<std::__1::map<xy, FBImageDescriptorState, facebook::image_processing::ComparePoints, std::__1::allocator<std::__1::pair<const xy, FBImageDescriptorState>>>, std::__1::allocator<std::__1::map<xy, FBImageDescriptorState, facebook::image_processing::ComparePoints, std::__1::allocator<std::__1::pair<const xy, FBImageDescriptorState>>>>> _frames;
    NSMutableDictionary *_colors;
}

@property(copy, nonatomic) NSMutableDictionary *colors; // @synthesize colors=_colors;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawDescriptors:(const map_7ac08a62 *)arg1 withState:(int)arg2 context:(struct CGContext *)arg3;
- (void)drawDescriptorsForFrame:(unsigned int)arg1 imageSize:(struct CGSize)arg2 gridSize:(struct CGSize)arg3 context:(struct CGContext *)arg4 options:(unsigned int)arg5;
- (void)setDescriptorState:(int)arg1 forDescriptors:(const vector_b604d65c *)arg2 frame:(unsigned int)arg3;
- (void)setDescriptorState:(int)arg1 forDescriptor:(const struct BriefDescriptor *)arg2 frame:(unsigned int)arg3;
- (id)initWithFrameCount:(unsigned int)arg1;

@end

