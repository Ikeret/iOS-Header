//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextureIO/TXRImage.h>

@interface TXRImageIndependent : TXRImage
{
    unsigned long long _pixelFormat;
    unsigned long long _alphaInfo;
    // Error parsing type: , name: _dimensions
}

// Error parsing type for property dimensions:
// Property attributes: T,R,N,V_dimensions

@property(nonatomic) unsigned long long alphaInfo; // @synthesize alphaInfo=_alphaInfo;
@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (struct CGImage *)newCGImageWithColorSpace:(struct CGColorSpace *)arg1 error:(id *)arg2;
- (_Bool)exportToURL:(id)arg1 uttype:(const struct __CFString *)arg2 error:(id *)arg3;
- (id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(id)arg3 bufferAllocator: /* Error: Ran out of types for this method. */;
- (id)initWithCGImage:(struct CGImage *)arg1 pixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)initWithCGImage:(struct CGImage *)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bytesPerImage:(id)arg5 buffer:(unsigned long long)arg6 offset: /* Error: Ran out of types for this method. */;
- (id)initWithImage:(id)arg1 dimensions:(unsigned long long)arg2 pixelFormat: /* Error: Ran out of types for this method. */;
- (id)initWithImage:(id)arg1 dimensions:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 alphaInfo: /* Error: Ran out of types for this method. */;

@end

