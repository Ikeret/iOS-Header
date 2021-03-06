//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSPasswordWordListEntry : NSObject
{
    _Bool _sensitive;
    NSString *_word;
    NSString *_wordListIdentifier;
    unsigned long long _guessesRequired;
}

@property(readonly, nonatomic) unsigned long long guessesRequired; // @synthesize guessesRequired=_guessesRequired;
@property(readonly, copy, nonatomic) NSString *wordListIdentifier; // @synthesize wordListIdentifier=_wordListIdentifier;
@property(readonly, nonatomic, getter=isSensitive) _Bool sensitive; // @synthesize sensitive=_sensitive;
@property(readonly, copy, nonatomic) NSString *word; // @synthesize word=_word;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWord:(id)arg1 isSensitive:(_Bool)arg2 wordListIdentifier:(id)arg3 guessesRequired:(unsigned long long)arg4;

@end

