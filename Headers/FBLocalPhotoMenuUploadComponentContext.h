//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBLocalPhotoMenuUploadComponentContext : NSObject
{
    SEL _textFieldEndsEditingAction;
    SEL _deleteItemAction;
}

@property(readonly, nonatomic) SEL deleteItemAction; // @synthesize deleteItemAction=_deleteItemAction;
@property(readonly, nonatomic) SEL textFieldEndsEditingAction; // @synthesize textFieldEndsEditingAction=_textFieldEndsEditingAction;
- (id)initWithEndsEditingAction:(SEL)arg1 deleteItemAction:(SEL)arg2;

@end

