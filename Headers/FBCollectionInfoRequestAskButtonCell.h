//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCollectionAbstractCell.h"

@class UIButton;
@protocol FBCollectionInfoRequestAskButtonCellDelegate;

@interface FBCollectionInfoRequestAskButtonCell : FBCollectionAbstractCell
{
    UIButton *_button;
    id <FBCollectionInfoRequestAskButtonCellDelegate> _infoRequestAskButtonCellDelegate;
}

@property(nonatomic) __weak id <FBCollectionInfoRequestAskButtonCellDelegate> infoRequestAskButtonCellDelegate; // @synthesize infoRequestAskButtonCellDelegate=_infoRequestAskButtonCellDelegate;
- (void).cxx_destruct;
- (void)_handleTapButton:(id)arg1;
@property(readonly, nonatomic) UIButton *button;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

