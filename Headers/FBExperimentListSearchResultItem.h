//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString;

@interface FBExperimentListSearchResultItem : NSObject
{
    NSString *_searchResultName;
    NSIndexPath *_atIndexPath;
}

+ (id)createSearchResultItemName:(id)arg1 indexPath:(id)arg2;
@property(readonly, nonatomic) NSIndexPath *atIndexPath; // @synthesize atIndexPath=_atIndexPath;
@property(readonly, copy, nonatomic) NSString *searchResultName; // @synthesize searchResultName=_searchResultName;
- (void).cxx_destruct;
- (id)initWithSearchResultName:(id)arg1 indexPath:(id)arg2;
- (id)init;

@end

