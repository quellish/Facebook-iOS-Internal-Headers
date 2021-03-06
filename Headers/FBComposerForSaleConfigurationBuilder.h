//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSOrderedSet;

@interface FBComposerForSaleConfigurationBuilder : NSObject
{
    NSArray *_currencies;
    NSOrderedSet *_forSaleCategories;
    BOOL _shouldInterceptPost;
    NSArray *_postInterceptWords;
    NSArray *_postInterceptWordsAfterNumber;
}

+ (id)composerForSaleConfigurationFromExistingComposerForSaleConfiguration:(id)arg1;
+ (id)composerForSaleConfiguration;
- (void).cxx_destruct;
- (id)withPostInterceptWordsAfterNumber:(id)arg1;
- (id)withPostInterceptWords:(id)arg1;
- (id)withShouldInterceptPost:(BOOL)arg1;
- (id)withForSaleCategories:(id)arg1;
- (id)withCurrencies:(id)arg1;
- (id)build;

@end

