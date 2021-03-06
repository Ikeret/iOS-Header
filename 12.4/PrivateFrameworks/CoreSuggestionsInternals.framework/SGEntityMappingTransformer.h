//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSDataDetector, NSString;

@interface SGEntityMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSDataDetector *_dataDetector;
    NSString *_emailMapping;
    NSString *_linkMapping;
}

+ (id)withEmailMapping:(id)arg1 linkMapping:(id)arg2;
@property(retain) NSString *linkMapping; // @synthesize linkMapping=_linkMapping;
@property(retain) NSString *emailMapping; // @synthesize emailMapping=_emailMapping;
@property(retain) NSDataDetector *dataDetector; // @synthesize dataDetector=_dataDetector;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithEmailMapping:(id)arg1 linkMapping:(id)arg2;

@end

