//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAssociatedMessageChatItem.h>

@class CKMediaObject, NSString;

@interface CKAssociatedStickerChatItem : CKAssociatedMessageChatItem
{
    CKMediaObject *_mediaObject;
}

@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void).cxx_destruct;
- (id)IMAssociatedStickerChatItem;
- (BOOL)transcriptOrientation;
- (Class)cellClass;
@property(readonly, copy, nonatomic) NSString *transferGUID;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;

@end

