//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBNativeThirdPartyURLHandler : NSObject
{
}

+ (id)sharedNativeURLCache;
+ (void)cacheNativeThirdPartyURLCacheElement:(id)arg1 withWebUrl:(id)arg2;
+ (void)cacheNativeThirdPartyURL:(id)arg1 withWebUrl:(id)arg2;
+ (id)cachedNativeThirdPartyURLCacheElementWithWebUrl:(id)arg1;
+ (id)cachedNativeThirdPartyURLWithWebUrl:(id)arg1;
+ (id)nativeThirdPartyURLFromArray:(id)arg1;
+ (id)parameterOfNativeThirdPartyApplication:(id)arg1 parameter:(id)arg2;
- (BOOL)isNativeThirdPartyApplicationInstallStateValid:(id)arg1;
- (id)conversionParametersFromNativeApplicationURL:(id)arg1;
- (id)appStoreParametersFromNativeApplicationURL:(id)arg1;
- (BOOL)shouldOpenAppStoreAsFallback:(id)arg1;
- (BOOL)isNativeThirdPartyApplicationExplicitlyAddressable:(id)arg1;
- (unsigned int)_openNativeThirdPartyURL:(id)arg1 trackingCodes:(id)arg2 trackingNodes:(id)arg3 extras:(id)arg4;
- (unsigned int)openNativeThirdPartyURLCacheElement:(id)arg1;
- (unsigned int)openNativeThirdPartyURL:(id)arg1;
- (BOOL)isNativeThirdPartyInstalled:(id)arg1;
- (id)_newURLForNativeThirdPartyApp:(id)arg1 appID:(id)arg2;
- (id)_newNativeURLStringToOpen:(id)arg1 appID:(id)arg2 checkAppSite:(BOOL)arg3;
- (id)_newAppSiteUrlStringToOpen:(id)arg1;
- (unsigned int)_openFallbackForNativeThirdPartyURL:(id)arg1 trackingCodes:(id)arg2 trackingNodes:(id)arg3 extras:(id)arg4;
- (void)openAndLogURL:(id)arg1 source:(id)arg2 appID:(id)arg3 backtrackID:(id)arg4 fbrpcURL:(id)arg5 trackingCodes:(id)arg6 trackingNodes:(id)arg7 extras:(id)arg8;
- (unsigned int)_openNativeURLWithInlineAppStore:(id)arg1 session:(id)arg2 properties:(id)arg3 overlayInfo:(id)arg4 rootViewController:(id)arg5 navigationCoordinator:(id)arg6 isNavigationCoordinatorOptional:(BOOL)arg7 productViewControllerDelegate:(id)arg8;
- (unsigned int)openNativeURLWithInlineAppStore:(id)arg1 session:(id)arg2 properties:(id)arg3 overlayInfo:(id)arg4 rootViewController:(id)arg5 navigationCoordinator:(id)arg6 productViewControllerDelegate:(id)arg7;
- (unsigned int)openNativeURLWithInlineAppStore:(id)arg1 session:(id)arg2 properties:(id)arg3 overlayInfo:(id)arg4 rootViewController:(id)arg5 productViewControllerDelegate:(id)arg6;

@end

