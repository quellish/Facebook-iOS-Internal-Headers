//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBFontHandle : NSObject
{
    NSString *_fontName;
}

@property(readonly, copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;
- (id)fontWithSize:(float)arg1 traits:(unsigned int)arg2;
- (id)fontWithSize:(float)arg1;
- (id)description;
- (id)initWithFontName:(id)arg1;

@end

