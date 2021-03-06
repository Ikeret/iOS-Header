//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface MFMixedMessageFragment : NSObject
{
    NSString *_markupString;
    NSData *_markupData;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSURL *_baseURL;
}

- (void).cxx_destruct;
- (id)description;
- (id)baseURL;
- (id)encodingName;
- (id)mimeType;
- (id)markupData;
- (id)markupString;
- (id)initWithMarkupData:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3;
- (id)initWithMarkupString:(id)arg1 baseURL:(id)arg2;

@end

