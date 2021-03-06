//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSOrderedSet;

@interface VUIMediaItemCredits : NSObject <NSCopying>
{
    NSOrderedSet *_cast;
    NSOrderedSet *_directors;
    NSOrderedSet *_producers;
    NSOrderedSet *_screenwriters;
}

+ (id)_stringRepresentationFromArray:(id)arg1;
+ (id)_arrayFromStringRepresentation:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSOrderedSet *screenwriters; // @synthesize screenwriters=_screenwriters;
@property(copy, nonatomic) NSOrderedSet *producers; // @synthesize producers=_producers;
@property(copy, nonatomic) NSOrderedSet *directors; // @synthesize directors=_directors;
@property(copy, nonatomic) NSOrderedSet *cast; // @synthesize cast=_cast;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringRepresentation;
- (id)initWithStringRepresentation:(id)arg1;
@property(readonly, nonatomic) _Bool hasCredits;

@end

