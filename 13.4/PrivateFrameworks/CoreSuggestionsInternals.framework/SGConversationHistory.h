//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SGConversationHistory : NSObject
{
    NSArray *_messages;
    NSString *_likelyLanguage;
}

- (void).cxx_destruct;
@property(readonly) NSString *likelyLanguage; // @synthesize likelyLanguage=_likelyLanguage;
@property(readonly) NSArray *messages; // @synthesize messages=_messages;
- (id)initWithMessages:(id)arg1;

@end

