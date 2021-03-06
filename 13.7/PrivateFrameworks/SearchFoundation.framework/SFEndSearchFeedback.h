//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFEndSearchFeedback : SFFeedback
{
    _Bool _isCanceled;
    NSString *_uuid;
    unsigned long long _cancelSearchEvent;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cancelSearchEvent; // @synthesize cancelSearchEvent=_cancelSearchEvent;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSearch:(id)arg1;

@end

