//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface NSFileAccessIntent : NSObject
{
    NSURL *_url;
    _Bool _isRead;
    long long _options;
}

+ (id)writingIntentWithURL:(id)arg1 options:(unsigned long long)arg2;
+ (id)readingIntentWithURL:(id)arg1 options:(unsigned long long)arg2;
@property(readonly) _Bool isRead; // @synthesize isRead=_isRead;
@property(copy) NSURL *URL; // @synthesize URL=_url;
- (void)dealloc;
- (id)description;
@property(readonly) unsigned long long writingOptions;
@property(readonly) unsigned long long readingOptions;

@end

