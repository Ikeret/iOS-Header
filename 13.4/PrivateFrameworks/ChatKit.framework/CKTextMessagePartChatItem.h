//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKMessagePartChatItem.h>

@class NSAttributedString, UIItemProvider;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem
{
    UIItemProvider *_dragItemProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool containsExcessiveLineHeightCharacters;
@property(readonly, nonatomic) _Bool containsHyperlink;
@property(readonly, copy, nonatomic) NSAttributedString *subject;
@property(readonly, copy, nonatomic) NSAttributedString *fallbackCorruptText;
@property(readonly, copy, nonatomic) NSAttributedString *text;
- (_Bool)shouldUseBigEmoji;
- (id)_time;
- (id)pasteboardItems;
- (id)dragItemProvider;
- (Class)impactBalloonViewClass;
- (Class)balloonViewClass;
- (id)_attributedTextWithTextColor:(id)arg1;
- (id)_fallbackCorruptMessageTextWithTextColor:(id)arg1;
- (_Bool)showMoneyResults;
- (id)loadTranscriptText;
- (id)sendAnimationTextWithColor:(id)arg1;
- (id)composition;

@end

