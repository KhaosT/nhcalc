# nhcalc

Compute NeuralHash for a given image.

Works with macOS 11.3 or later.

Behind the scene, the implementation invokes the API provided by the Vision framework to compute the NeuralHash for a given image.

The end result is a base64 encoded hash representing the given image.

Usage: `nhcalc path_to_image`

Example output: 

    644b2b714969792f6c78776d3355444c
    dK+qIiy/lxwm3UDL

Resizing the image yields same hash, even down to below 200x100. Cropping or rotating the image yields different hashes.
