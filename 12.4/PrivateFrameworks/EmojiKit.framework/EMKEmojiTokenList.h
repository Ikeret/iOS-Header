//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmojiKit/NSCopying-Protocol.h>

@class NSArray;

@interface EMKEmojiTokenList : NSObject <NSCopying>
{
    NSArray *_emojiTokenArray;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)emojiTokenAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long count;
@property(readonly) NSArray *emojiTokenArray;
- (id)initWithEmojiTokenArray:(id)arg1;

@end

